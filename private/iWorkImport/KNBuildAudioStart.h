//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNBuildMovieStart.h>

#import <iWorkImport/KNAnimationPluginArchiving-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface KNBuildAudioStart : KNBuildMovieStart <KNAnimationPluginArchiving>
{
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)localizedMenuString:(long long)arg1;
+ (id)animationFilter;
+ (id)animationName;
+ (int)animationCategory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

