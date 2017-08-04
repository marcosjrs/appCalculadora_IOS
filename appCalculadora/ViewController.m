//
//  ViewController.m
//  appCalculadora
//
//  Created by Marcos JRS on 3/8/17.
//  Copyright © 2017 Marcos JRS. All rights reserved.
//

#import "ViewController.h"
#import "Calculadora.h"

@interface ViewController ()
@property (strong, nonatomic) Calculadora * calculadora;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.calculadora = [[Calculadora alloc] init];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)pulsarDigito:(UIButton *)sender {
    [self.calculadora inputDigito:sender.currentTitle];
    self.lblDisplay.text = [self.calculadora displayValor];
}
- (IBAction)pulsarOperador:(UIButton *)sender {
    [self.calculadora inputOperador:sender.currentTitle];
    self.lblDisplay.text = [self.calculadora displayValor];
}
- (IBAction)pulsarIgual:(UIButton *)sender {    
    [self.calculadora inputIgual];
    self.lblDisplay.text = [self.calculadora displayValor];
}
- (IBAction)pulsarBorrar:(UIButton *)sender {
    [self.calculadora inputBorrar];
    self.lblDisplay.text = [self.calculadora displayValor];
}
@end
