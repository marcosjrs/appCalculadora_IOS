//
//  ViewController.h
//  appCalculadora
//
//  Created by Marcos JRS on 3/8/17.
//  Copyright © 2017 Marcos JRS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *lblDisplay;

- (IBAction)pressM:(id)sender;
- (IBAction)presMPlus:(id)sender;
- (IBAction)pressMMinus:(id)sender;
- (IBAction)pressC:(id)sender;
- (IBAction)pressDecimal:(id)sender;
- (IBAction)pressIgual:(id)sender;
- (IBAction)pressDivision:(id)sender;
- (IBAction)pressMultiplicacion:(id)sender;
- (IBAction)pressResta:(id)sender;
- (IBAction)pressSuma:(id)sender;
- (IBAction)press0:(id)sender;
- (IBAction)press1:(id)sender;
- (IBAction)press2:(id)sender;
- (IBAction)press3:(id)sender;
- (IBAction)press4:(id)sender;
- (IBAction)press5:(id)sender;
- (IBAction)press6:(id)sender;
- (IBAction)press7:(id)sender;
- (IBAction)press8:(id)sender;
- (IBAction)press9:(id)sender;

@end


