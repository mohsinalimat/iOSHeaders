//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage, UIImageView;
@protocol OFUIWindowDraggingPasteboard;

@interface OFUIWindowDraggingItem : NSObject
{
    id <OFUIWindowDraggingPasteboard> _object;
    UIImageView *_imageView;
    UIImage *_originalImage;
    UIImage *_placeHolderImage;
    struct CGRect _originalBounds;
    double _imageAspectRatio;
    struct CGRect _imageContentsRect;
    struct CGAffineTransform _originalTransform;
    _Bool _isReverting;
    double _rotation;
}

@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool isReverting; // @synthesize isReverting=_isReverting;
@property(nonatomic) struct CGAffineTransform originalTransform; // @synthesize originalTransform=_originalTransform;
@property(nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property(nonatomic) double imageAspectRatio; // @synthesize imageAspectRatio=_imageAspectRatio;
@property(nonatomic) struct CGRect originalBounds; // @synthesize originalBounds=_originalBounds;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id <OFUIWindowDraggingPasteboard> object; // @synthesize object=_object;
- (void)dealloc;
- (id)initWithObject:(id)arg1 image:(id)arg2;
- (id)init;

@end

