//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeLayout.h>

@class TSWPLinkedLayout;

__attribute__((visibility("hidden")))
@interface TSWPLinkedTextBoxLayout : TSWPShapeLayout
{
    unsigned long long _indexInFlow;
}

@property(nonatomic) unsigned long long indexInFlow; // @synthesize indexInFlow=_indexInFlow;
- (void)i_invalidateWrap;

// Remaining properties
@property(readonly, nonatomic) TSWPLinkedLayout *containedLayout; // @dynamic containedLayout;

@end

