//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCoding-Protocol.h>

@class UIView, UIViewController;

@interface MusicVerticalScrollingContainerItem : NSObject <NSCoding>
{
    UIView *_view;
    UIViewController *_viewController;
}

+ (id)verticalScrollingContainerWithViewController:(id)arg1;
+ (id)verticalScrollingContainerWithView:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_unregisterForContentScrollViewDidChangeNotification;
- (void)_registerForContentScrollViewDidChangeNotification;
- (void)_handleContentScrollViewDidChangeNotification:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

