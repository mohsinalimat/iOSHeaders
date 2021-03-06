//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HAButtonHapticsLoader : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool serviceAvailable;
@property(readonly, nonatomic) long long maxNumberOfSlots;
- (float)defaultUpGainForType:(long long)arg1;
- (float)defaultDownGainForType:(long long)arg1;
- (_Bool)hapticAssetType:(long long)arg1 hasAudio:(_Bool *)arg2 hasHaptic:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)loadButtonHapticOfType:(long long)arg1 withParameters:(id)arg2 atSlot:(long long)arg3 error:(id *)arg4;
- (_Bool)loadButtonHapticOfType:(long long)arg1 atSlot:(long long)arg2 error:(id *)arg3;
- (void)dealloc;

@end

