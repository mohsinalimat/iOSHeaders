//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

@class PUAssetGroupHelper;

__attribute__((visibility("hidden")))
@interface PUGroupActivity : PUActivity
{
    PUAssetGroupHelper *_assetGroupHelper;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)setItemSourceController:(id)arg1;
- (id)_assetGroupHelper;

@end

