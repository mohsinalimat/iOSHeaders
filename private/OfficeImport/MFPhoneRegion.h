//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhoneRegion : MFRegion
{
    OITSUBezierPath *m_path;
    struct CGRect m_bounds;
}

- (int)invert:(id)arg1;
- (int)frame:(id)arg1:(id)arg2;
- (int)fill:(id)arg1:(id)arg2;
- (id)pathForClippingWithDeviceContext:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1:(struct CGRect)arg2;
- (id)initWithRects:(id)arg1:(struct CGRect)arg2:(id)arg3;

@end

