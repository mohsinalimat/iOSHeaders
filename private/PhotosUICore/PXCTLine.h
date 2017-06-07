//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSShadow, NSString, PXCTFrame;

@interface PXCTLine : NSObject
{
    _Bool _prepared;
    double _width;
    struct CGRect _imageBounds;
    _Bool _truncated;
    _Bool _endOfString;
    NSString *_string;
    const struct __CTLine *_line;
    PXCTFrame *_frame;
    NSAttributedString *_referenceAttributedString;
    double _ascent;
    double _descent;
    struct CGContext *_context;
    NSShadow *_shadow;
    struct _NSRange _stringRange;
    struct CGPoint _origin;
    struct CGAffineTransform _transform;
}

@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) double descent; // @synthesize descent=_descent;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(readonly, nonatomic) NSAttributedString *referenceAttributedString; // @synthesize referenceAttributedString=_referenceAttributedString;
@property(readonly, nonatomic) __weak PXCTFrame *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) const struct __CTLine *line; // @synthesize line=_line;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic, getter=isEndOfString) _Bool endOfString; // @synthesize endOfString=_endOfString;
@property(readonly, nonatomic, getter=isTruncated) _Bool truncated; // @synthesize truncated=_truncated;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) struct _NSRange stringRange; // @synthesize stringRange=_stringRange;
- (void).cxx_destruct;
- (id)description;
- (void)_transformBy:(struct CGAffineTransform)arg1;
- (void)scaleVerticallyBy:(double)arg1;
- (void)scaleBy:(double)arg1;
- (void)translateVerticallyBy:(double)arg1;
- (void)translateHorizontallyBy:(double)arg1;
@property(readonly, nonatomic) struct CGRect imageBounds;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) struct CGPoint textPosition;
@property(readonly, nonatomic) double descentPosition;
@property(readonly, nonatomic) double baselinePosition;
@property(readonly, nonatomic) double ascentPosition;
@property(readonly, nonatomic) double width;
- (const struct CGPath *)createPath;
- (void)draw;
- (void)prepare;
- (void)dealloc;
- (id)initWithLine:(struct __CTLine *)arg1 origin:(struct CGPoint)arg2 frame:(id)arg3 referenceAttributedString:(id)arg4 truncated:(_Bool)arg5;
- (id)init;

@end

