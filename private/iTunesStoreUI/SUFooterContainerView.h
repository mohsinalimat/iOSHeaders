//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SUFooterContainerView : UIView
{
    UIView *_contentView;
    UIView *_footerView;
    _Bool _footerVisible;
}

@property(nonatomic, getter=isFooterVisible) _Bool footerVisible; // @synthesize footerVisible=_footerVisible;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)dealloc;

@end

