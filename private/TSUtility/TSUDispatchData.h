//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data;

@interface TSUDispatchData : NSObject
{
    NSObject<OS_dispatch_data> *_data;
    unsigned long long _size;
    unsigned long long _maxFragmentsCount;
    NSObject<OS_dispatch_data> *_fragmentedData;
    NSObject<OS_dispatch_data> *_defragmentedData;
    unsigned long long _fragmentsCount;
}

@property(readonly, nonatomic) unsigned long long fragmentsCount; // @synthesize fragmentsCount=_fragmentsCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData; // @synthesize defragmentedData=_defragmentedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData; // @synthesize fragmentedData=_fragmentedData;
@property(nonatomic) unsigned long long maxFragmentsCount; // @synthesize maxFragmentsCount=_maxFragmentsCount;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *data;
- (void)append:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

