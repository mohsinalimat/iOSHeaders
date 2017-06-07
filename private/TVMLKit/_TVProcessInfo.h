//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TVProcessInfo : NSObject
{
    _Bool _hasPrivateEntitlement;
    _Bool _hasiTunesAPIEntitlement;
    struct __SecTask *_currentTask;
}

+ (id)currentProcessInfo;
@property(nonatomic) struct __SecTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) _Bool hasiTunesAPIEntitlement; // @synthesize hasiTunesAPIEntitlement=_hasiTunesAPIEntitlement;
@property(readonly, nonatomic) _Bool hasPrivateEntitlement; // @synthesize hasPrivateEntitlement=_hasPrivateEntitlement;
- (_Bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;
- (_Bool)boolValueForEntitlement:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (void)dealloc;
- (id)init;

@end

