//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSItemProvider, UIView, _DUIPreview;
@protocol _UIDraggingItemVisualTarget;

@interface _UIDraggingItem : NSObject
{
    NSArray *_imageComponents;
    NSItemProvider *_provider;
    _DUIPreview *_preview;
    CDUnknownBlockType _previewProvider;
    id _privateLocalContext;
    id _localObject;
    CDUnknownBlockType _imageComponentsProvider;
    unsigned long long _options;
    double _scale;
    double _rotationAngle;
    id <_UIDraggingItemVisualTarget> _sourceVisualTarget;
    id <_UIDraggingItemVisualTarget> _destinationVisualTarget;
    UIView *_droppedSnapshotView;
    unsigned long long _dirtyReasons;
    NSItemProvider *_dropItemProvider;
    CDUnknownBlockType _droppedSnapshotViewProvider;
    long long _mutability;
    struct CGPoint _anchorPoint;
}

@property(nonatomic, getter=_mutability, setter=_setMutability:) long long mutability; // @synthesize mutability=_mutability;
@property(copy, nonatomic, getter=_droppedSnapshotViewProvider, setter=_setDroppedSnapshotViewProvider:) CDUnknownBlockType droppedSnapshotViewProvider; // @synthesize droppedSnapshotViewProvider=_droppedSnapshotViewProvider;
@property(retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
@property(nonatomic, getter=_dirtyReasons, setter=_setDirtyReasons:) unsigned long long dirtyReasons; // @synthesize dirtyReasons=_dirtyReasons;
@property(retain, nonatomic) UIView *droppedSnapshotView; // @synthesize droppedSnapshotView=_droppedSnapshotView;
@property(nonatomic) __weak id <_UIDraggingItemVisualTarget> destinationVisualTarget; // @synthesize destinationVisualTarget=_destinationVisualTarget;
@property(nonatomic) __weak id <_UIDraggingItemVisualTarget> sourceVisualTarget; // @synthesize sourceVisualTarget=_sourceVisualTarget;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(copy, nonatomic) CDUnknownBlockType imageComponentsProvider; // @synthesize imageComponentsProvider=_imageComponentsProvider;
@property(retain, nonatomic) id localObject; // @synthesize localObject=_localObject;
- (void).cxx_destruct;
- (void)_setPrivateLocalContext:(id)arg1;
- (id)_privateLocalContext;
- (id)_preview;
- (id)_imageComponents;
- (void)_clearDirty;
- (void)_setDirtyForReason:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_isDirty) _Bool dirty;
- (void)_setPreviewProvider:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_previewProvider;
@property(readonly, nonatomic) struct CGRect imageFrame;
@property(readonly, copy, nonatomic) NSArray *imageComponents;
- (void)setImageContents:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) NSItemProvider *provider;
- (id)description;
- (void)_updateFromInternalItem:(id)arg1;
- (id)_initWithInternalItem:(id)arg1;
- (id)initWithProvider:(id)arg1 sourceVisualTarget:(id)arg2 metadata:(id)arg3;
- (id)initWithProvider:(id)arg1 metadata:(id)arg2;

@end

