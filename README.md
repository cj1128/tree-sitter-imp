# Tree Sitter for the Imp Language

This is a toy project for playing around with tree-sitter.

`grammar.js` implements the grammar for a simple language called [Imp](// https://softwarefoundations.cis.upenn.edu/lf-current/Imp.html).

## Install

https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md

Install the `tree-sitter` CLI

```
cargo install tree-sitter-cli
```

## Generate the `parser.c`

`tree-sitter gen`

## Test parsing

`tree-sittger parse test.imp`

## Highlight

- `tree-sitter init-config` initialize config file
- edit config file to include directory of this repo
- edit `package.json` to add `tree-sitter` field
- add new file `queries/highlights.scm` to define the syntax highlighting
- `tree-sitter highlight test.imp` Tada!

## Build the JS binding

- `pnpm add -D node-gyp`
- `pnpm add -D nan`
- `npx node-gyp configure`
- `npx node-gyp build`

## Query the AST

We can use queries to query the AST.

- `pnpm add -D tree-sitter`
- `node query.js test.imp` print all assignments whose left param is `y`
