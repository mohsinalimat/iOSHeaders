//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTTableDataObject : NSObject
{
    unsigned int _refCount;
}

@property(readonly, nonatomic) unsigned int refCount; // @synthesize refCount=_refCount;
- (void)addReferencesFromObject:(id)arg1;
- (_Bool)dropReference;
- (void)takeReference;
- (id)initWithRefCount:(unsigned int)arg1;

@end

