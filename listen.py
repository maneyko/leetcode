#!/usr/bin/env python3

"""
Need to have in ~/.vimrc::
    au FileType tex,cpp
          \ nnoremap <leader>c :silent exec "!echo >> /tmp/_listener"<CR><C-l>
"""

import os, sys

from whenchanged.whenchanged import WhenChanged

name = 'p5'
if len(sys.argv) > 1:
    name = sys.argv[1]

texfile = f'{name}.cpp'
listener = '/tmp/_listener'
command = f'make {name} && ./{name}'

with open(listener, 'wb'): pass

w = WhenChanged([listener], [command])
print(f"""Going to execute::

    {command}

Waiting for {listener!r} to change...""")
w.run()
