//
//  BambooSticks.h
//  AudioKitPlayground
//
//  Created by Nicholas Arner on 3/21/15.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#import "AKFoundation.h"

@interface BambooSticks : AKInstrument

// Instrument Properties
@property AKInstrumentProperty *amplitude;

// Audio outlet for global effects processing (choose mono or stereo accordingly)
@property (readonly) AKAudio *auxilliaryOutput;
//@property (readonly) AKStereoAudio *auxilliaryOutput;

@end

@interface BambooSticksNote : AKNote

// Note properties
@property AKNoteProperty *count;
@property AKNoteProperty *mainResonantFrequency;
@property AKNoteProperty *firstResonantFrequency;
@property AKNoteProperty *secondResonantFrequency;
@property AKNoteProperty *amplitude;


@end
