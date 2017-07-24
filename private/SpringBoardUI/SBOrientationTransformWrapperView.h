//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _SBOrientationTransformedContentView;

@interface SBOrientationTransformWrapperView : UIView
{
    _SBOrientationTransformedContentView *_transformedView;
    long long _contentOrientation;
    long long _containerOrientation;
}

@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateGeometry;
- (struct CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGAffineTransform)arg1;
- (struct CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGPoint)arg1;
- (struct CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGAffineTransform)arg1;
- (struct CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGPoint)arg1;
- (void)addContentView:(id)arg1;
@property(readonly, nonatomic) NSArray *contentViews;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end

