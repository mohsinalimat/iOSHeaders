//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface CCUIControlCenterPositionProvider : NSObject
{
    NSArray *_packingRules;
    NSDictionary *_rectByIdentifier;
    struct CCUILayoutSize _layoutSize;
}

@property(readonly, nonatomic) struct CCUILayoutSize layoutSize; // @synthesize layoutSize=_layoutSize;
- (void).cxx_destruct;
- (struct CCUILayoutRect)layoutRectForIdentifier:(id)arg1;
- (id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(struct CCUILayoutPoint)arg4 maximumSize:(struct CCUILayoutSize)arg5 outputLayoutSize:(out struct CCUILayoutSize *)arg6;
- (void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2;
@property(readonly, nonatomic) struct CCUILayoutSize maximumLayoutSize; // @dynamic maximumLayoutSize;
- (id)initWithPackingRules:(id)arg1;

@end

