//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

@class NSArray, NSLayoutRect;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface _NSLayoutRectObservable : NSObservationSource
{
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id <NSLayoutItem> _layoutItem;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;
- (void)_reflectUpdatedRect:(id)arg1;
- (void)dealloc;
- (id)initWithRect:(id)arg1 inLayoutItem:(id)arg2;

@end

