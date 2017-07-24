//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistantSupport/NSSecureCoding-Protocol.h>

@interface SASProximityHandshake : NSObject <NSSecureCoding>
{
    _Bool _hasPasscodeSet;
    int _simplePasscodeType;
    int _unlockType;
    long long _platformType;
}

+ (_Bool)supportsSecureCoding;
@property int unlockType; // @synthesize unlockType=_unlockType;
@property int simplePasscodeType; // @synthesize simplePasscodeType=_simplePasscodeType;
@property _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property long long platformType; // @synthesize platformType=_platformType;
- (void)loadInformation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

