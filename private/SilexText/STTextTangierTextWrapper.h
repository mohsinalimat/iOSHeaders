//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexText/TSWPTextWrap-Protocol.h>

@class NSArray, NSMutableArray;

@interface STTextTangierTextWrapper : NSObject <TSWPTextWrap>
{
    NSArray *_exclusionPaths;
    NSMutableArray *_tangierExclusionPaths;
    struct CGAffineTransform _canvasSpaceToWrapSpace;
    struct CGAffineTransform _wrapSpaceToCanvasSpace;
}

@property(retain, nonatomic) NSMutableArray *tangierExclusionPaths; // @synthesize tangierExclusionPaths=_tangierExclusionPaths;
@property(nonatomic) struct CGAffineTransform wrapSpaceToCanvasSpace; // @synthesize wrapSpaceToCanvasSpace=_wrapSpaceToCanvasSpace;
@property(nonatomic) struct CGAffineTransform canvasSpaceToWrapSpace; // @synthesize canvasSpaceToWrapSpace=_canvasSpaceToWrapSpace;
@property(retain, nonatomic) NSArray *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
- (void).cxx_destruct;
- (unsigned long long)splitLineRect:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappable:(id)arg3 wrapContext:(id)arg4;
- (unsigned long long)splitLineRect:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappableRect:(struct CGRect)arg3;
- (_Bool)textShouldFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3;
- (id)groupInfoContainingWrappable:(id)arg1;
- (unsigned long long)intersectRects:(struct CGRect *)arg1 rects1Count:(unsigned long long)arg2 rects2:(const struct CGRect *)arg3 rects2Count:(unsigned long long)arg4 minSize:(double)arg5;
- (id)collectWrappables:(id)arg1 target:(id)arg2;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(_Bool)arg4 floatingCausedWrap:(_Bool *)arg5 skipHint:(double *)arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(_Bool *)arg3;

@end

