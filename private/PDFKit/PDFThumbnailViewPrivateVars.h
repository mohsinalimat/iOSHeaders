//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, PDFCollectionView, PDFView, UIColor;

@interface PDFThumbnailViewPrivateVars : NSObject
{
    PDFView *_PDFView;
    UIColor *_backgroundColor;
    struct CGSize _thumbnailSize;
    PDFCollectionView *_collectionView;
    NSLayoutConstraint *_topInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
    NSLayoutConstraint *_leftInsetConstraint;
    NSLayoutConstraint *_rightInsetConstraint;
}

- (void).cxx_destruct;

@end
