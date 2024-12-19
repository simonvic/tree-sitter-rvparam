/**
 * @file RVParam grammar for treesitter
 * @author simonvic <simonvic.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "rvparam",

  supertypes: $ => [
    $.entry,
    $.literal
  ],

  word: $ => $.identifier,

  extras: $ => [
    /\s/, // whitespaces do matters, but whatever
    $.commentLine,
    $.commentBlock
  ],

  rules: {
    compilationUnit: $ => repeat($.entry),

    commentLine: _ => token(seq('//', /[^\n]*/)),

    // kindly borrowed from https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js#L1291C5-L1297C8
    commentBlock: _ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    )),

    entry: $ => choice(
      $.class,
      $.enum,
      $.entrySimple,
      $.entryArray,
      $.deleteClass,
    ),

    entrySimple: $ => seq(
      field("name", $.identifier),
      '=',
      field("value", $.literal),
      ';'
    ),

    entryArray: $ => seq(
      field("name", $.identifier),
      '[]',
      '=',
      $.array,
      ';'
    ),

    array: $ => seq(
      '{',
      optional(seq(
        choice($.literal, $.array),
        repeat(seq(',', choice($.literal, $.array))),
      )),
      '}'
    ),

    enum: $ => seq(
      'enum',
      '{',
      optional(seq(
        $.identifier,
        repeat(seq(',', $.identifier)),
      )),
      '}',
      ';'
    ),

    class: $ => seq(
      'class',
      field("name", $.identifier),
      optional(seq(
        ':',
        field("inherited", $.identifier)
      )),
      optional(seq(
        '{',
        repeat($.entry),
        '}'
      )),
      ';'
    ),

    deleteClass: $ => seq(
      'delete', $.identifier, ';'
    ),

    literal: $ => choice(
      $.integer,
      $.float,
      $.string,
    ),

    integer: _ => token(/[0-9]+/),

    float: _ => token(seq(
      /[0-9]+/,
      '.',
      /[0-9]+/,
    )),

    string: $ => seq(
      '"',
      repeat(choice(
        $.escapeSequence,
        $._stringContent,
      )),
      '"',
    ),

    // TODO: add quote escape "hello ""world"" "
    escapeSequence: _ => token(/\\["\\nrt]/),
    _stringContent: _ => token(prec(2, choice(
      /[^"\\\n]/,
      /\\[^"\\nrt]/,
    ))),

    identifier: _ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),

  }
});
