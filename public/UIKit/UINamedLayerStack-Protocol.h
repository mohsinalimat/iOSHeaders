//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol UINamedLayerStack <NSObject>
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly, nonatomic) id radiosityImage;
@end

