//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@class NSData;

@interface HDEurotasIdentificationData : HDHealthServiceCharacteristic
{
    NSData *_publicKey;
    NSData *_signature;
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;

@end

