//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface CUBonjourDevice : NSObject
{
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_txtDictionary;
    NSData *_txtData;
}

@property(copy, nonatomic) NSData *txtData; // @synthesize txtData=_txtData;
@property(readonly, copy, nonatomic) NSDictionary *txtDictionary; // @synthesize txtDictionary=_txtDictionary;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (void)_updateTXTDictionary:(id)arg1;
- (id)description;

@end
