//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UIScrollViewIndexBarEntry : NSObject
{
    _Bool _isPlaceholder;
    _Bool _hasCachedContentOffset;
    struct CGPoint _cachedContentOffset;
    CDUnknownBlockType _contentOffsetGenerator;
    NSString *_title;
    NSIndexPath *_targetFocusedIndexPath;
}

+ (id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2;
+ (id)entryWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;
+ (id)entryWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;
@property(copy, nonatomic) NSIndexPath *targetFocusedIndexPath; // @synthesize targetFocusedIndexPath=_targetFocusedIndexPath;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (id)initWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;

@end

