//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (HUAdditions)
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;
- (id)hu_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
- (id)hu_attributedStringScaledByFactor:(double)arg1;
- (double)hu_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
@end

