//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVStackWrappingView : UIView
{
    UIImageView *_bgImageView;
    UIImage *_backgroundImage;
    NSArray *_headerSupplementaryViews;
    UICollectionView *_stackView;
    NSArray *_supplementaryCellLayoutAttributes;
}

@property(readonly, copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // @synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes;
@property(retain, nonatomic) UICollectionView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSArray *headerSupplementaryViews; // @synthesize headerSupplementaryViews=_headerSupplementaryViews;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets)arg1;
- (void)safeAreaInsetsDidChange;

@end

