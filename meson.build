project('vscrt_dependency',
    'cpp',
    default_options : [
        'cpp_std=c++17',
        'b_vscrt=md'
    ])

qt5_dep = dependency('qt5', modules : ['Core'])

executable('main',
    sources : 'main.cpp',
    dependencies : qt5_dep
)
