//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface _MPStoreFollow : NSObject
{
    NSNumber *_targetEntityID;
    long long _targetEntityType;
}

+ (id)followWithPerson:(id)arg1;
+ (id)followWithStoreDictionary:(id)arg1;
@property(nonatomic) long long targetEntityType; // @synthesize targetEntityType=_targetEntityType;
@property(retain, nonatomic) NSNumber *targetEntityID; // @synthesize targetEntityID=_targetEntityID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

