//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationsUI/NCBannerAccessoryServiceInterface-Protocol.h>

@class NSDictionary;

@interface NCBannerAccessoryViewController : UIViewController <NCBannerAccessoryServiceInterface>
{
    NSDictionary *_context;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_getPreferredContentSizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setContext:(id)arg1;
- (void)setSticky:(_Bool)arg1;
- (void)becomeSticky;
- (void)dismiss;

@end

