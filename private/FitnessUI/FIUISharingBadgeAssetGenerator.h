//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIUISharingBadgeAssetGenerator : NSObject
{
}

+ (struct CGSize)_badgeSizeForSharedImageSize:(struct CGSize)arg1 withdefaultBadgeSize:(struct CGSize)arg2 defaultSharedImageSize:(struct CGSize)arg3;
+ (struct CGSize)_sizeOfBadgeImageForAchievement:(id)arg1 withinSharePNGOfSize:(struct CGSize)arg2;
+ (unsigned long long)_badgeShapeForAchievement:(id)arg1;
+ (unsigned long long)_badgeShapeFromName:(id)arg1;
+ (struct CGPoint)_originForBadgeImageOfSize:(struct CGSize)arg1 withinSharedImageOfSize:(struct CGSize)arg2 forAchievement:(id)arg3;
+ (void)_drawDate:(id)arg1 inSharedImageOfSize:(struct CGSize)arg2;
+ (id)generateSharingPNGForAchievement:(id)arg1;
+ (id)generateSharingPNGForWorkout:(id)arg1;

@end

