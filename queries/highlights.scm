(commentLine) @comment @spell
(commentBlock) @comment.block @spell

(integer) @number
(float) @number.float
(string) @string
(quoteEscape) @string.escape


(identifier) @variable

[ "=" "+=" "-=" ] @operator

[ "[]" "{" "}" ] @punctuation.bracket

[ "," ";" ] @punctuation.delimiter

(string ["\"" "\""] @punctuation.delimiter)

[
 "class"
 "enum"
 "delete"
 ] @keyword

(ERROR) @error
