//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EAREndpointer : NSObject
{
    struct unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer>> _endpointer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)didEndpointWithFeatures:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 audioTimestamp:(double)arg4;
- (id)initWithConfiguration:(id)arg1;

@end

