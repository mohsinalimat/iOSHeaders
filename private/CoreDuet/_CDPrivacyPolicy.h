//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDPrivacyPolicy : NSObject
{
    _Bool canPersistOnStorage;
    double temporalPrecision;
}

+ (id)sharedPrivacyPolicy;
@property(readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;
@property(readonly, nonatomic) _Bool canPersistOnStorage; // @synthesize canPersistOnStorage;
- (id)description;
- (id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(_Bool)arg2;
- (id)init;

@end

