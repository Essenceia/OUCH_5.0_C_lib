# OUCH

This is a Nasdaq OUCH 5.0 message parsing C library used to handle inbound and outbound OUCH messages. 

This is the companion library to the [C `Totalview ITCH 5.0` library](https://github.com/Essenceia/TotalView_ITCH_5.0_C_lib) and created 
in the context of my larger [Nasdaq HFT FPGA project](https://github.com/Essenceia/Nasdaq-HFT-FPGA).

Most of this code was automatically generated using a `python` script and an `xml` used to outline the message format. 
The python script and generated content can be found in the `gen` directory.
`xml` format file can found in the `doc` directory.


## Build library 

To build the static library `libouch.a` : 

```
make lib
```

## Build release

To build a release and have it packaged in the `release` directory :

```
make release
```


## Build test

To test the build:

```
make test
```

## Sources
  
Reference OUCH 5.0 specification : http://nasdaqtrader.com/content/technicalsupport/specifications/TradingProducts/Ouch5.0.pdf

## License

This code is licensed under CC BY-NC 4.0, all rights belong to Julia Desmazes.

