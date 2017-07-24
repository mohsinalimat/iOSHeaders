//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CUBluetoothDevice : NSObject
{
    _Bool _magicPaired;
    _Bool _supportsAACPService;
    _Bool _present;
    int _colorCode;
    unsigned int _productIdentifier;
    CDStruct_83abfce7 _address;
    NSString *_addressString;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_name;
}

@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(nonatomic) _Bool supportsAACPService; // @synthesize supportsAACPService=_supportsAACPService;
@property(nonatomic) unsigned int productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) _Bool magicPaired; // @synthesize magicPaired=_magicPaired;
@property(nonatomic) int colorCode; // @synthesize colorCode=_colorCode;
@property(copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(nonatomic) CDStruct_83abfce7 address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

