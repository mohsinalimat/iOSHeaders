//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDynamicAdLayout-Protocol.h>

@class NSString;
@protocol SXEdgeSpacing;

@interface SXDebugAdLayout : NSObject <SXDynamicAdLayout>
{
    id <SXEdgeSpacing> _margin;
}

@property(readonly, nonatomic) id <SXEdgeSpacing> margin; // @synthesize margin=_margin;
- (void).cxx_destruct;
- (id)initWithMargin:(struct _SXConvertibleValue)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

