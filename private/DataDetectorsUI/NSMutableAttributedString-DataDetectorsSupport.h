//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (DataDetectorsSupport)
- (void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 usingURLificationBlock:(CDUnknownBlockType)arg2 context:(id)arg3;
- (_Bool)dd_urlifyResult:(id)arg1 withBlock:(CDUnknownBlockType)arg2 referenceDate:(id)arg3 context:(id)arg4;
- (void)dd_resetResults;
@end
