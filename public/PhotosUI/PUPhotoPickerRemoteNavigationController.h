//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerRemoteNavigationController : UINavigationController
{
    _Bool _initialized;
    id <PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerdelegate;
}

@property(nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) __weak id <PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerdelegate; // @synthesize remoteViewControllerdelegate=_remoteViewControllerdelegate;
- (void).cxx_destruct;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;

@end

