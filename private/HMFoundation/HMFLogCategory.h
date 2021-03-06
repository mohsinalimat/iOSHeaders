//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface HMFLogCategory : NSObject
{
    NSObject<OS_os_log> *_internal;
    NSString *_loggingCategory;
    NSString *_loggingSubsystem;
}

+ (id)_getCategory:(id)arg1;
+ (void)_addCategory:(id)arg1 inSubsystem:(id)arg2;
+ (id)categoryWithName:(id)arg1 inSubsystem:(id)arg2;
+ (id)categoryWithName:(id)arg1;
+ (id)defaultCategory;
+ (void)initialize;
@property(readonly, nonatomic) NSString *loggingSubsystem; // @synthesize loggingSubsystem=_loggingSubsystem;
@property(readonly, nonatomic) NSString *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property(readonly, nonatomic) NSObject<OS_os_log> *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (id)initCategory:(id)arg1 inSubsystem:(id)arg2;

@end

