//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLStructMember.h>

@class MTLType, NSString;

__attribute__((visibility("hidden")))
@interface MTLStructMemberInternal : MTLStructMember
{
    NSString *_name;
    unsigned long long _offset;
    unsigned int _dataType:16;
    id _details;
    unsigned long long _argumentIndex;
    unsigned long long _render_target;
    unsigned long long _raster_order_group;
    MTLType *_typeInfo;
}

@property(readonly) unsigned long long raster_order_group; // @synthesize raster_order_group=_raster_order_group;
@property(readonly) unsigned long long render_target; // @synthesize render_target=_render_target;
- (unsigned long long)argumentIndex;
- (unsigned long long)dataType;
- (unsigned long long)offset;
- (id)name;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)dataTypeDescription;
- (id)indirectArgumentType;
- (void)setOffset:(unsigned long long)arg1;
- (id)pointerType;
- (id)textureReferenceType;
- (id)structType;
- (id)arrayType;
- (unsigned long long)indirectArgumentIndex;
- (void)dealloc;
- (id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 indirectArgumentIndex:(unsigned long long)arg4 render_target:(unsigned long long)arg5 raster_order_group:(unsigned long long)arg6 details:(id)arg7;

@end

