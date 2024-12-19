[
  (classBody)
  (enum)
  (array)
] @indent.begin

[ "}" ] @indent.branch @indent.end

(commentLine) @indent.ignore

[
  (ERROR)
  (commentBlock)
] @indent.auto

