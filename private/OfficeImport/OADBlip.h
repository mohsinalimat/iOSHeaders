//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OADSubBlip;

__attribute__((visibility("hidden")))
@interface OADBlip : NSObject
{
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned int *)referenceCount;
- (void)setAltSubBlip:(id)arg1;
- (id)altSubBlip;
- (void)setMainSubBlip:(id)arg1;
- (id)mainSubBlip;
- (void)dealloc;

@end

