//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface WBUFormAutoFillMultipleLoginsAlertController : UIAlertController
{
    UIAlertAction *_cancelAction;
    id _appDidEnterBackgroundObserver;
    _Bool _cancelsWhenAppEntersBackground;
}

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 preferredStyle:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool cancelsWhenAppEntersBackground; // @synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;

@end

