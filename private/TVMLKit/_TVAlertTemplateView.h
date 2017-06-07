//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateView : UIView
{
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    NSArray *_viewsAbove;
    UICollectionView *_collectionView;
    NSArray *_viewsBelow;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) NSArray *viewsBelow; // @synthesize viewsBelow=_viewsBelow;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *viewsAbove; // @synthesize viewsAbove=_viewsAbove;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBgImage:(id)arg1;

@end

