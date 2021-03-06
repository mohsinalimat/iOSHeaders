//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CBBlueLightClient : NSObject
{
    _Bool _supported;
}

+ (_Bool)supportsBlueLightReduction;
@property _Bool supported; // @synthesize supported=_supported;
- (_Bool)getWarningStrength:(float *)arg1;
- (_Bool)getWarningCCT:(float *)arg1;
- (_Bool)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(_Bool)arg3;
- (_Bool)setStrength:(float)arg1 commit:(_Bool)arg2;
- (_Bool)getStrength:(float *)arg1;
- (_Bool)setCCTRange:(CDStruct_869f9c67 *)arg1;
- (_Bool)getCCTRange:(CDStruct_869f9c67 *)arg1;
- (_Bool)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(_Bool)arg3;
- (_Bool)setCCT:(float)arg1 commit:(_Bool)arg2;
- (_Bool)getCCT:(float *)arg1;
- (_Bool)getDefaultCCTRange:(CDStruct_869f9c67 *)arg1;
- (void)suspendNotifications:(_Bool)arg1;
- (void)setStatusNotificationBlock:(CDUnknownBlockType)arg1;
- (_Bool)getBlueLightStatus:(CDStruct_f4084295 *)arg1;
- (_Bool)setSchedule:(const CDStruct_19009447 *)arg1;
- (_Bool)setMode:(int)arg1;
- (_Bool)setEnabled:(_Bool)arg1;
- (_Bool)setEnabled:(_Bool)arg1 withOption:(int)arg2;
- (_Bool)setActive:(_Bool)arg1;
- (id)init;
- (id)initWithClientObj:(id)arg1;

@end

