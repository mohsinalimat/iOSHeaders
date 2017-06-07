//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView;
@protocol SKUIModalSourceViewProviderDelegate;

@interface SKUIModalSourceViewProvider : NSObject
{
    id <SKUIModalSourceViewProviderDelegate> _delegate;
    _Bool _hideOriginalSourceView;
    UIView *_originalSourceView;
    UIBarButtonItem *_sourceButtonBarItem;
    id _userInfo;
    UIView *_sourceView;
}

@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIBarButtonItem *sourceButtonBarItem; // @synthesize sourceButtonBarItem=_sourceButtonBarItem;
@property(retain, nonatomic) UIView *originalSourceView; // @synthesize originalSourceView=_originalSourceView;
@property(nonatomic) __weak id <SKUIModalSourceViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOriginalSourceView;
- (void)hideOriginalSourceView;
- (id)animationView;

@end

