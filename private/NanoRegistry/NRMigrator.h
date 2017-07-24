//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSPointerArray;

@interface NRMigrator : NSObject
{
    NSPointerArray *_observers;
    _Bool _migrating;
    NRDevice *_migratingDevice;
}

+ (id)sharedMigrator;
@property(readonly, nonatomic) NRDevice *migratingDevice; // @synthesize migratingDevice=_migratingDevice;
- (void).cxx_destruct;
- (void)enterPreMigrationMode;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(_Bool)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

