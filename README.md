# NCS Project Template
This is my template for all my NCS projects, it's intended to be combined with [my NCS setup](https://github.com/Solidedge/ncs_setup).

## Installing
For initial setup go to [my NCS setup](https://github.com/Solidedge/ncs_setup). Keep the template folder, which is a clone of this repository anyway, and create a copy of it for your project.

## NCS Directory
```
ncs
├── .west
│   └── config
├── bootloader/...
├── mbedtls/...
├── modules/...
|
├── my_projects
│   ├── **ncs_project_template**
│   │   ├── applications
│   │   │   └── app_template
│   │   │   │   ├── include/...
│   │   │   │   ├── src
│   │   │   │   │   └── main.c
│   │   │   │   ├── CMakeLists.txt
│   │   │   │   ├── dts.overlay
│   │   │   │   ├── Kconfig
│   │   │   │   ├── prj.conf
│   │   │   │   └── README.md
│   │   ├── drivers/...
│   │   ├── include/...
│   │   ├── zephyr/...
│   │   ├── CMakeLists.txt
│   │   ├── Kconfig.prjtemp
│   │   ├── README.md (the one you're reading)
│   │   └── west.yml
│   ├── .gitignore
│   └── west.yml
|
├── nrf/...
├── nrfxlib/...
├── test/...
├── tools/...
├── zephyr/...
├── .gitignore
└── README.md
```
