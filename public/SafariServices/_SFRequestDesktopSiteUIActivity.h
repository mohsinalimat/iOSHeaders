//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@class _SFReloadOptionsController;

@interface _SFRequestDesktopSiteUIActivity : _SFActivity
{
    _SFReloadOptionsController *_reloadOptionsController;
}

@property(readonly, nonatomic) _SFReloadOptionsController *reloadOptionsController; // @synthesize reloadOptionsController=_reloadOptionsController;
- (void).cxx_destruct;
- (void)performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)init;
- (id)initWithReloadOptionsController:(id)arg1;

@end

