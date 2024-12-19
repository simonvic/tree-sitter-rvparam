/**
 * @file RVParam grammar for treesitter
 * @author simonvic <simonvic.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "rvparam",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
